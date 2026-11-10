/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c6a0; name: FUN_0099c6a0
 */


void FUN_0099c6a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  FUN_00942420();
  cVar1 = FUN_00945f40();
  if (cVar1 != '\0') {
    uVar9 = 0;
    do {
      uVar6 = FUN_00942420(param_1);
      puVar7 = (undefined8 *)FUN_00946110(uVar6,uVar9);
      iVar2 = FUN_00946b90();
      if (iVar2 != 0) {
        uVar10 = *puVar7;
        uVar3 = FUN_008e0a00(uVar10);
        uVar6 = FUN_009423b0(param_1);
        uVar4 = FUN_008e12a0(uVar10,0xc);
        uVar8 = FUN_0093a550(uVar6,uVar3,iVar2,uVar4);
        if ((uVar8 & 1) != 0) {
          uVar6 = FUN_009423e0(param_1);
          FUN_0092cff0(uVar6,uVar10,iVar2);
          uVar6 = FUN_009423b0(param_1);
          FUN_0093a5c0(uVar6,uVar3,iVar2);
        }
      }
      uVar9 = uVar9 + 1;
      FUN_00942420(param_1);
      uVar5 = FUN_00945f40();
    } while (uVar9 < (uVar5 & 0xff));
  }
  return;
}


