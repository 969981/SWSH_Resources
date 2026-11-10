/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940f90; name: FUN_00940f90
 */


void FUN_00940f90(long param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),3);
  if (uVar2 == (param_2 & 0xff)) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 8));
    FUN_008df3f0(uVar3,param_2);
    sVar1 = FUN_008e2d10();
    FUN_008db870(*(undefined8 *)(param_1 + 0x40),0,sVar1 != 0);
    return;
  }
  return;
}


