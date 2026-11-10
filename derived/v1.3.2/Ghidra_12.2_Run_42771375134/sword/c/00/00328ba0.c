/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00328ba0; name: FUN_00328ba0
 */


void FUN_00328ba0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
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
  uint uVar8;
  uint uVar9;
  void *__src;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_74;
  byte *local_70;
  char *local_68;
  
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_68);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (local_68 == (char *)0x0) goto LAB_00328dbc;
  *(int *)PTR_DAT_027122a8 = *(int *)PTR_DAT_027122a8 + 1;
  if (*local_68 == '\0') {
    local_70 = &DAT_01d38550;
    uVar7 = (uint)DAT_01d38550;
    if (uVar7 != 0) goto LAB_00328c64;
LAB_00328d8c:
    __src = (void *)0x0;
    uVar12 = 0;
    pbVar6 = local_70;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      lVar3 = uVar5 + 1;
      uVar5 = uVar1;
    } while (local_68[lVar3] != '\0');
                    /* try { // try from 00328c34 to 00328c53 has its CatchHandler @ 00328df8 */
    pbVar6 = (byte *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
    memcpy(pbVar6,local_68,uVar1 & 0xffffffff);
    pbVar6[uVar1 & 0xffffffff] = 0;
    uVar7 = (uint)*pbVar6;
    local_70 = pbVar6;
    if (*pbVar6 == 0) goto LAB_00328d8c;
LAB_00328c64:
    pbVar6 = local_70;
    uVar10 = 0;
    __src = (void *)0x0;
    pbVar2 = local_70;
    uVar11 = 0;
    do {
      while( true ) {
                    /* try { // try from 00328c80 to 00328c83 has its CatchHandler @ 00328e08 */
        iVar4 = isspace(uVar7);
        if (iVar4 == 0) break;
        uVar7 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
        if (uVar7 == 0) {
          uVar12 = uVar11;
          goto LAB_00328d9c;
        }
      }
      local_74 = local_74 & 0xffff;
      if (local_70 == (byte *)0x0) {
        uVar7 = 0;
LAB_00328ccc:
        uVar8 = 0;
        uVar9 = 0;
        local_74 = 0;
      }
      else {
        uVar7 = (uint)*local_70;
        if (*local_70 == 0) goto LAB_00328ccc;
                    /* try { // try from 00328ca8 to 00328d63 has its CatchHandler @ 00328e04 */
        uVar5 = strtoul((char *)local_70,(char **)&local_70,10);
        local_74 = (uint)uVar5;
        uVar7 = local_74 & 0xff000000;
        uVar8 = local_74 & 0xff0000;
        uVar9 = local_74 & 0xff00;
        local_74 = local_74 & 0xff;
      }
      uVar12 = uVar11 + 4;
      local_74 = uVar8 | uVar7 | uVar9 | local_74;
      if (uVar10 < uVar12) {
        uVar7 = 0x20;
        do {
          uVar10 = uVar7;
          uVar7 = uVar10 << 1;
        } while (uVar10 < uVar12);
        __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,uVar10);
        if (uVar11 != 0) {
          memcpy(__dest,__src,(ulong)uVar11);
        }
        (**(code **)(*param_6 + 0x18))(param_6,__src);
        __src = __dest;
      }
      memcpy((void *)((long)__src + (ulong)uVar11),&local_74,4);
      uVar7 = (uint)*local_70;
      pbVar2 = local_70;
      uVar11 = uVar12;
    } while (uVar7 != 0);
  }
LAB_00328d9c:
  *param_3 = __src;
  *param_5 = uVar12 >> 2;
                    /* try { // try from 00328db0 to 00328dbb has its CatchHandler @ 00328df0 */
  (**(code **)(*param_6 + 0x18))(param_6,pbVar6);
LAB_00328dbc:
                    /* try { // try from 00328dc4 to 00328dcf has its CatchHandler @ 00328df4 */
  (**(code **)(*param_6 + 0x18))(param_6,0);
  return;
}


