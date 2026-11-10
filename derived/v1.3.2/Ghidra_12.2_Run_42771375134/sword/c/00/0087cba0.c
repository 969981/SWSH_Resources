/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087cba0; name: FUN_0087cba0
 */


undefined8 FUN_0087cba0(long param_1,uint *param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864bc0(uVar1,uVar2);
  uVar3 = FUN_00864c60();
  uVar7 = *param_2;
  uVar3 = uVar3 & 0xff;
  if (uVar7 < uVar3) {
    if (param_4 == 0) {
      do {
        uVar1 = FUN_00864c80(uVar7);
        iVar4 = FUN_00864c90(uVar7);
        if (iVar4 == 0) goto LAB_0087cca4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    else {
      do {
        uVar1 = FUN_00864c80(uVar7);
        iVar4 = FUN_00864c90(uVar7);
        if ((iVar4 == 0) && (uVar5 = FUN_0087c6d0(param_4,uVar1), (uVar5 & 1) == 0)) {
          uVar5 = FUN_0087c6d0(param_4,uVar1);
          if (((uVar5 & 1) == 0) && (*(uint *)(param_4 + 0x104) < 0x41)) {
            *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x104) * 4) = uVar1;
            *(int *)(param_4 + 0x104) = *(int *)(param_4 + 0x104) + 1;
          }
LAB_0087cca4:
          *param_3 = uVar1;
          *param_2 = uVar7 + 1;
          uVar6 = FUN_0087bba0(param_1,uVar1);
          return uVar6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
  }
  return 3;
}


