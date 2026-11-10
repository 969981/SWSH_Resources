/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9c20; name: FUN_007a9c20
 */


void FUN_007a9c20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716740;
  if (DAT_02610b2c != '\x04') {
    if (*(long *)PTR_DAT_02716740 != 0) {
      FUN_007ab2e0(*(long *)PTR_DAT_02716740,0);
    }
    if (DAT_02610b2c != '\x01') {
      FUN_007b5340(*(undefined8 *)PTR_DAT_027104b0);
      FUN_007a8c10(*(undefined8 *)PTR_DAT_027104a0,DAT_02610b2c);
      FUN_007abef0(*(undefined8 *)PTR_DAT_02716748);
    }
    FUN_007aabf0(*(undefined8 *)puVar1);
    DAT_02610b2c = '\x04';
  }
  return;
}


