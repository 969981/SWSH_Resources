/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087c9f0; name: FUN_0087c9f0
 */


undefined8 FUN_0087c9f0(long param_1,ushort param_2,int *param_3,undefined4 *param_4,long param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864bc0(uVar3,uVar4);
  bVar1 = FUN_00864c60();
  if (bVar1 != 0) {
    param_2 = param_2 & 0xff;
    iVar9 = 0;
    uVar8 = 0;
    if (param_5 == 0) {
      do {
        uVar2 = FUN_00864c70(uVar8);
        uVar3 = FUN_00864c80(uVar8);
        iVar5 = FUN_00864c90(uVar8);
        if (iVar5 != 1) {
          if (param_2 < uVar2) {
            return 3;
          }
          if (param_2 == uVar2) {
            if (iVar9 == *param_3) goto LAB_0087cb38;
            iVar9 = iVar9 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar1);
    }
    else {
      do {
        uVar2 = FUN_00864c70(uVar8);
        uVar3 = FUN_00864c80(uVar8);
        iVar5 = FUN_00864c90(uVar8);
        if (iVar5 != 1) {
          uVar6 = FUN_0087c6d0(param_5,uVar3);
          if (param_2 < uVar2) {
            return 3;
          }
          if (param_2 == uVar2) {
            if (((uVar6 & 1) == 0) && (iVar9 == *param_3)) {
LAB_0087cb38:
              if ((param_5 != 0) &&
                 ((uVar6 = FUN_0087c6d0(param_5,uVar3), (uVar6 & 1) == 0 &&
                  (*(uint *)(param_5 + 0x104) < 0x41)))) {
                *(undefined4 *)(param_5 + (ulong)*(uint *)(param_5 + 0x104) * 4) = uVar3;
                *(int *)(param_5 + 0x104) = *(int *)(param_5 + 0x104) + 1;
              }
              *param_4 = uVar3;
              *param_3 = *param_3 + 1;
              uVar7 = FUN_0087bba0(param_1,uVar3);
              return uVar7;
            }
            iVar9 = iVar9 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar1);
    }
  }
  return 3;
}


