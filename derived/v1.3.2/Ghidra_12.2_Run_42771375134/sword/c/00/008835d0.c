/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008835d0; name: FUN_008835d0
 */


undefined4
FUN_008835d0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint *param_5)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar4 = FUN_008783b0(param_2);
  uVar5 = FUN_008783c0(param_2);
  uVar10 = FUN_00879860(param_2);
  if ((((uVar10 & 1) == 0) ||
      (((iVar6 = FUN_008783b0(param_2), iVar6 != 0x19 && (iVar6 != 0x34)) && (iVar6 != 0x85)))) &&
     (uVar10 = FUN_0087d610(param_2,2), (uVar10 & 1) == 0)) {
    uVar3 = FUN_008787f0(param_2);
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if ((uVar10 & 1) == 0) {
      FUN_00864d20(uVar4,uVar5);
      bVar2 = FUN_00864d90();
      if (bVar2 != 0) {
        uVar11 = 0;
        do {
          iVar6 = FUN_00864da0(uVar11);
          uVar7 = FUN_00864db0(uVar11);
          uVar5 = FUN_00864dc0(uVar11);
          uVar8 = FUN_00864df0(uVar11);
          uVar9 = FUN_0087a5f0(param_2);
          if ((uVar8 & 0xff) <= uVar9) {
            if (iVar6 == 0x2c) {
              uVar8 = FUN_00878c10(param_2);
              if ((uVar7 & 0xffff) <= uVar8) goto LAB_0088371c;
            }
            else {
              if (iVar6 == 0x31) {
                cVar1 = *(char *)(param_4 + 0xc);
              }
              else {
                if (iVar6 != 0x30) goto LAB_008836cc;
                cVar1 = *(char *)(param_4 + 0xb);
              }
              if (cVar1 != '\0') {
LAB_0088371c:
                if (param_5 == (uint *)0x0) {
                  return uVar5;
                }
                *param_5 = uVar11;
                return uVar5;
              }
            }
          }
LAB_008836cc:
          uVar11 = uVar11 + 1;
        } while (uVar11 < bVar2);
      }
    }
  }
  return uVar4;
}


