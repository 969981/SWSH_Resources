/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaa190; name: FUN_00eaa190
 */


undefined8 FUN_00eaa190(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00dbf8b0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271fcb8,0);
    if (iVar1 == 1) {
      uVar3 = FUN_00dbfcc0(param_1,PTR_DAT_0271fc68);
      return uVar3;
    }
    if (iVar1 == 2) {
      uVar3 = FUN_00dbfcc0(param_1,PTR_DAT_0271fc70);
      return uVar3;
    }
    uVar3 = 0;
    if (iVar1 == 3) {
      uVar3 = FUN_00dbfcc0(param_1,PTR_DAT_0271fdd8);
      return uVar3;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


