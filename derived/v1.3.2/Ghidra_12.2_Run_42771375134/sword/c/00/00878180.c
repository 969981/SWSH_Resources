/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878180; name: FUN_00878180
 */


void FUN_00878180(long param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),0,0);
  FUN_00870e80(*(undefined8 *)(param_1 + 0x98),0,0);
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),0,0);
  FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),1,0);
  FUN_00870e80(*(undefined8 *)(param_1 + 0x98),1,0);
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),1,0);
  FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),2,0);
  FUN_00870e80(*(undefined8 *)(param_1 + 0x98),2,0);
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),2,0);
  FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),3,0);
  FUN_00870e80(*(undefined8 *)(param_1 + 0x98),3,0);
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),3,0);
  uVar4 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar7 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar8 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_00876c70(uVar6,uVar7,uVar8);
  FUN_00864bc0(uVar4,uVar5);
  cVar1 = FUN_00864c60();
  if (cVar1 != '\0') {
    uVar10 = 0;
    do {
      uVar3 = FUN_00864c70(uVar10);
      if ((uVar2 & 0xff) < uVar3) {
        return;
      }
      uVar4 = FUN_00864c80(uVar10);
      FUN_0087bd30(param_1,uVar4);
      uVar10 = uVar10 + 1;
      uVar9 = FUN_00864c60();
    } while (uVar10 < (uVar9 & 0xff));
  }
  return;
}


