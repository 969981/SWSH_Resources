/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031d9d0; name: FUN_0031d9d0
 */


void FUN_0031d9d0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                 uint *param_5,long *param_6)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  void *__dest;
  uint uVar7;
  void *__src;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [16];
  byte *local_78;
  char *local_70;
  undefined1 auStack_68 [8];
  
  *param_4 = 0x24;
  *param_3 = 0;
  *param_5 = 0;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_70);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (local_70 == (char *)0x0) goto LAB_0031dbf0;
  *(int *)PTR_DAT_02712270 = *(int *)PTR_DAT_02712270 + 1;
  if (*local_70 == '\0') {
    local_78 = &DAT_01d38550;
    uVar7 = (uint)DAT_01d38550;
    if (uVar7 != 0) goto LAB_0031da94;
LAB_0031dbb4:
    __src = (void *)0x0;
    uVar10 = 0;
    pbVar6 = local_78;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      lVar3 = uVar5 + 1;
      uVar5 = uVar1;
    } while (local_70[lVar3] != '\0');
                    /* try { // try from 0031da64 to 0031da83 has its CatchHandler @ 0031dc2c */
    pbVar6 = (byte *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
    memcpy(pbVar6,local_70,uVar1 & 0xffffffff);
    pbVar6[uVar1 & 0xffffffff] = 0;
    uVar7 = (uint)*pbVar6;
    local_78 = pbVar6;
    if (*pbVar6 == 0) goto LAB_0031dbb4;
LAB_0031da94:
    pbVar6 = local_78;
    uVar9 = 0;
    __src = (void *)0x0;
    pbVar2 = local_78;
    uVar8 = 0;
    do {
      while( true ) {
                    /* try { // try from 0031dabc to 0031dabf has its CatchHandler @ 0031dc3c */
        iVar4 = isspace(uVar7);
        if (iVar4 == 0) break;
        uVar7 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
        if (uVar7 == 0) {
          uVar10 = uVar8;
          goto LAB_0031dbc4;
        }
      }
      if ((local_78 != (byte *)0x0) && (*local_78 != 0)) {
                    /* try { // try from 0031dae0 to 0031db8b has its CatchHandler @ 0031dc38 */
        FUN_003222d0(auStack_68,auStack_a0,&local_78);
        FUN_003222d0(auStack_68,auStack_94,&local_78);
        FUN_003222d0(auStack_68,auStack_88,&local_78);
      }
      uVar10 = uVar8 + 0x24;
      if (uVar9 < uVar10) {
        uVar7 = 0x20;
        do {
          uVar9 = uVar7;
          uVar7 = uVar9 << 1;
        } while (uVar9 < uVar10);
        __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,uVar9);
        if (uVar8 != 0) {
          memcpy(__dest,__src,(ulong)uVar8);
        }
        (**(code **)(*param_6 + 0x18))(param_6,__src);
        __src = __dest;
      }
      memcpy((void *)((long)__src + (ulong)uVar8),auStack_a0,0x24);
      uVar7 = (uint)*local_78;
      pbVar2 = local_78;
      uVar8 = uVar10;
    } while (uVar7 != 0);
  }
LAB_0031dbc4:
  *param_3 = __src;
  *param_5 = uVar10 / 0x24;
                    /* try { // try from 0031dbe4 to 0031dbef has its CatchHandler @ 0031dc24 */
  (**(code **)(*param_6 + 0x18))(param_6,pbVar6);
LAB_0031dbf0:
                    /* try { // try from 0031dbf8 to 0031dc03 has its CatchHandler @ 0031dc28 */
  (**(code **)(*param_6 + 0x18))(param_6,0);
  return;
}


