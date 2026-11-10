/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00326970; name: FUN_00326970
 */


void FUN_00326970(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
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
  undefined2 local_74 [2];
  byte *local_70;
  char *local_68;
  
  *param_4 = 2;
  *param_3 = 0;
  *param_5 = 0;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_68);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (local_68 == (char *)0x0) goto LAB_00326b58;
  *(int *)PTR_DAT_02712298 = *(int *)PTR_DAT_02712298 + 1;
  if (*local_68 == '\0') {
    local_70 = &DAT_01d38550;
    uVar7 = (uint)DAT_01d38550;
    if (uVar7 != 0) goto LAB_00326a34;
LAB_00326b28:
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
                    /* try { // try from 00326a04 to 00326a23 has its CatchHandler @ 00326b94 */
    pbVar6 = (byte *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
    memcpy(pbVar6,local_68,uVar1 & 0xffffffff);
    pbVar6[uVar1 & 0xffffffff] = 0;
    uVar7 = (uint)*pbVar6;
    local_70 = pbVar6;
    if (*pbVar6 == 0) goto LAB_00326b28;
LAB_00326a34:
    pbVar6 = local_70;
    uVar8 = 0;
    __src = (void *)0x0;
    pbVar2 = local_70;
    uVar9 = 0;
    do {
      while( true ) {
                    /* try { // try from 00326a50 to 00326a53 has its CatchHandler @ 00326ba4 */
        iVar4 = isspace(uVar7);
        if (iVar4 == 0) break;
        uVar7 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
        if (uVar7 == 0) {
          uVar10 = uVar9;
          goto LAB_00326b38;
        }
      }
      if ((local_70 != (byte *)0x0) && (*local_70 != 0)) {
                    /* try { // try from 00326a74 to 00326aff has its CatchHandler @ 00326ba0 */
        uVar5 = strtoul((char *)local_70,(char **)&local_70,10);
        local_74[0] = (undefined2)uVar5;
      }
      uVar10 = uVar9 + 2;
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
      memcpy((void *)((long)__src + (ulong)uVar9),local_74,2);
      uVar7 = (uint)*local_70;
      pbVar2 = local_70;
      uVar9 = uVar10;
    } while (uVar7 != 0);
  }
LAB_00326b38:
  *param_3 = __src;
  *param_5 = uVar10 >> 1;
                    /* try { // try from 00326b4c to 00326b57 has its CatchHandler @ 00326b8c */
  (**(code **)(*param_6 + 0x18))(param_6,pbVar6);
LAB_00326b58:
                    /* try { // try from 00326b60 to 00326b6b has its CatchHandler @ 00326b90 */
  (**(code **)(*param_6 + 0x18))(param_6,0);
  return;
}


