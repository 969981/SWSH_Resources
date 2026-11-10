/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e32b00; name: FUN_00e32b00
 */


void FUN_00e32b00(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar1 = FUN_015114c0(lVar3,0x188d41bb7b57fb);
  if ((0x7e3 < uVar1) && (*(char *)(*(long *)PTR_DAT_02717c48 + 0x350) != '\0')) {
    bVar2 = *(byte *)(param_2 + 6);
    if (bVar2 < 0x3d) {
      bVar2 = 0x3c;
    }
    *(byte *)(param_2 + 6) = bVar2;
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e32bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


