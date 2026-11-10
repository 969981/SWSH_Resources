/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec9600; name: FUN_00ec9600
 */


void FUN_00ec9600(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = FUN_00884820(*param_2);
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  uVar2 = FUN_00884820(plVar7);
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7,uVar8);
      uVar6 = FUN_0087d610(uVar5,2);
      iVar3 = FUN_0087cdb0(uVar5);
      if (((uVar6 & 1) == 0) && (((iVar9 = 2, iVar3 == 0x28 || (iVar3 == 0x31)) || (iVar3 == 0xf3)))
         ) goto LAB_00ec96b0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  iVar9 = 1;
LAB_00ec96b0:
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  }
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      uVar5 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,iVar3);
      uVar6 = FUN_0087d610(uVar5,0);
      if ((uVar6 & 1) != 0) {
        iVar4 = FUN_0087d4d0(uVar5);
        FUN_0087d4f0(uVar5,iVar4 - iVar9 & (iVar4 - iVar9 >> 0x1f ^ 0xffffffffU));
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


