/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031d770; name: FUN_0031d770
 */


void FUN_0031d770(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
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
  undefined1 auStack_80 [16];
  byte *local_70;
  char *local_68;
  undefined1 auStack_58 [8];
  
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_68);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (local_68 == (char *)0x0) goto LAB_0031d954;
  *(int *)PTR_DAT_02712268 = *(int *)PTR_DAT_02712268 + 1;
  if (*local_68 == '\0') {
    local_70 = &DAT_01d38550;
    uVar7 = (uint)DAT_01d38550;
    if (uVar7 != 0) goto LAB_0031d834;
LAB_0031d924:
    __src = (void *)0x0;
    uVar10 = 0;
    pbVar6 = local_70;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      lVar3 = uVar5 + 1;
      uVar5 = uVar1;
    } while (local_68[lVar3] != '\0');
                    /* try { // try from 0031d804 to 0031d823 has its CatchHandler @ 0031d990 */
    pbVar6 = (byte *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
    memcpy(pbVar6,local_68,uVar1 & 0xffffffff);
    pbVar6[uVar1 & 0xffffffff] = 0;
    uVar7 = (uint)*pbVar6;
    local_70 = pbVar6;
    if (*pbVar6 == 0) goto LAB_0031d924;
LAB_0031d834:
    pbVar6 = local_70;
    uVar8 = 0;
    __src = (void *)0x0;
    pbVar2 = local_70;
    uVar9 = 0;
    do {
      while( true ) {
                    /* try { // try from 0031d84c to 0031d84f has its CatchHandler @ 0031d9a0 */
        iVar4 = isspace(uVar7);
        if (iVar4 == 0) break;
        uVar7 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
        if (uVar7 == 0) {
          uVar10 = uVar9;
          goto LAB_0031d934;
        }
      }
      if ((local_70 != (byte *)0x0) && (*local_70 != 0)) {
                    /* try { // try from 0031d870 to 0031d8fb has its CatchHandler @ 0031d99c */
        FUN_0033d220(auStack_58,auStack_80,&local_70);
      }
      uVar10 = uVar9 + 0x10;
      if (uVar8 < uVar10) {
        uVar7 = 0x20;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 << 1;
        } while (uVar8 < uVar10);
        __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,uVar8);
        if (uVar9 != 0) {
          memcpy(__dest,__src,(ulong)uVar9);
        }
        (**(code **)(*param_6 + 0x18))(param_6,__src);
        __src = __dest;
      }
      memcpy((void *)((long)__src + (ulong)uVar9),auStack_80,0x10);
      uVar7 = (uint)*local_70;
      pbVar2 = local_70;
      uVar9 = uVar10;
    } while (uVar7 != 0);
  }
LAB_0031d934:
  *param_3 = __src;
  *param_5 = uVar10 >> 4;
                    /* try { // try from 0031d948 to 0031d953 has its CatchHandler @ 0031d988 */
  (**(code **)(*param_6 + 0x18))(param_6,pbVar6);
LAB_0031d954:
                    /* try { // try from 0031d95c to 0031d967 has its CatchHandler @ 0031d98c */
  (**(code **)(*param_6 + 0x18))(param_6,0);
  return;
}


