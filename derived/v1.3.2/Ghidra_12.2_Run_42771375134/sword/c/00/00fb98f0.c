/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb98f0; name: FUN_00fb98f0
 */


void FUN_00fb98f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_01510f00(lVar3,0x873db5b0ab26aff8);
    if ((((uVar1 & 1) != 0) && (*(char *)(param_1 + 0x44) != '\0')) &&
       (*(char *)(param_1 + 0x45) != '\0')) {
      *(undefined1 *)(param_1 + 0x45) = 0;
      nn::os::GetSystemTick();
      uVar2 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x260) = uVar2;
      FUN_00fbab10(param_1);
      FUN_00fbacc0(param_1);
      FUN_00fb9cd0(param_1);
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fb9998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      return;
    }
  }
  return;
}


