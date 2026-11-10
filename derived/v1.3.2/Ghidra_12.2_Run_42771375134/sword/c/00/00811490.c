/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00811490; name: FUN_00811490
 */


uint FUN_00811490(ulong *param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint unaff_w26;
  
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar5 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (lVar4 == 0) {
    do {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 < (byte *)param_1[1]) {
        uVar3 = (uint)*pbVar1;
        if ((char)*pbVar1 < '\0') goto LAB_0081167c;
        *(uint *)(param_1 + 4) = uVar3;
        *param_1 = (ulong)(pbVar1 + 1);
      }
      else {
        uVar3 = 0;
LAB_0081167c:
        uVar3 = FUN_0080d8c0(param_1,uVar3);
        *(uint *)(param_1 + 4) = uVar3;
      }
      uVar2 = 1;
      if ((uVar3 == 0) || (uVar2 = 1, (uVar3 & 7) == 4)) goto LAB_008116a0;
      plVar5 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
      uVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      uVar8 = FUN_00810550(param_1,uVar3,uVar7);
    } while ((uVar8 & 1) != 0);
    uVar2 = 0;
  }
  else {
    do {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 < (byte *)param_1[1]) {
        uVar3 = (uint)*pbVar1;
        if ((char)*pbVar1 < '\0') goto LAB_008115e8;
        *(uint *)(param_1 + 4) = uVar3;
        *param_1 = (ulong)(pbVar1 + 1);
      }
      else {
        uVar3 = 0;
LAB_008115e8:
        uVar3 = FUN_0080d8c0(param_1,uVar3);
        *(uint *)(param_1 + 4) = uVar3;
      }
      uVar2 = 1;
      if ((uVar3 == 0) || (uVar2 = 1, (uVar3 & 7) == 4)) break;
      uVar2 = uVar3 >> 3;
      lVar6 = FUN_007e3b90(lVar4,uVar2);
      if (lVar6 == 0) {
        lVar6 = FUN_007e4500(lVar4,uVar2);
        if (lVar6 != 0) {
          if (param_1[8] == 0) {
            lVar6 = (**(code **)(*plVar5 + 0x270))(plVar5,uVar2);
          }
          else {
            lVar6 = FUN_007e3790(param_1[8],lVar4,uVar2);
          }
          if (lVar6 != 0) goto LAB_00811530;
        }
        lVar6 = 0;
        if ((uVar3 != 0xb) || (*(char *)(*(long *)(lVar4 + 0x20) + 0x50) == '\0'))
        goto LAB_00811530;
        uVar2 = FUN_008116c0(param_1,param_2);
        uVar3 = 1;
        if ((uVar2 & 1) != 0) {
          uVar3 = 2;
        }
      }
      else {
LAB_00811530:
        uVar2 = FUN_00811aa0(uVar3,lVar6,param_2,param_1);
        uVar3 = ~uVar2 & 1;
      }
      unaff_w26 = uVar2 & unaff_w26;
      uVar2 = unaff_w26;
    } while ((uVar3 | 2) == 2);
  }
LAB_008116a0:
  return uVar2 & 1;
}


