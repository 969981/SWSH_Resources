/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c25d0; name: FUN_004c25d0
 */


void FUN_004c25d0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00432780(PTR_LAB_027134d0,0x90);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
      FUN_004c4530();
    } while (lVar2 != 0);
    if (param_1 == (long *)0x0) {
      return;
    }
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  *param_1 = (long)(PTR_DAT_027134c8 + 0x10);
  *(undefined8 *)PTR_DAT_02712de8 = 0;
  FUN_004c2d80(param_1);
  FUN_00404870(uVar1,param_1);
  return;
}


