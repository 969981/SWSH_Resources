/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e0b0; name: FUN_0087e0b0
 */


void FUN_0087e0b0(long param_1,uint param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0x379) {
    iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 != 0x379) goto LAB_0087e19c;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30e;
LAB_0087e18c:
      uVar4 = 0x1ba;
    }
    else {
      if ((param_2 & 0xffff) != 1) goto LAB_0087e19c;
      sVar1 = FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
      if (sVar1 != 0x450) goto LAB_0087e19c;
      uVar3 = 0x1ba;
      uVar4 = 0x30e;
    }
  }
  else {
    if (iVar2 != 0x378) {
      if (iVar2 == 0x286) {
        FUN_0087e1c0(param_1,param_2,param_3);
      }
      goto LAB_0087e19c;
    }
    iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 != 0x378) goto LAB_0087e19c;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30d;
      goto LAB_0087e18c;
    }
    if ((param_2 & 0xffff) != 1) goto LAB_0087e19c;
    sVar1 = FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 != 0x44f) goto LAB_0087e19c;
    uVar3 = 0x1ba;
    uVar4 = 0x30d;
  }
  FUN_0087e550(param_1,uVar3,uVar4,param_3);
LAB_0087e19c:
  FUN_0087c040(param_1);
  FUN_0087c370(param_1);
  return;
}


