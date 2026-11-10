/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004057d0; name: FUN_004057d0
 */


undefined8 FUN_004057d0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02712a60;
  if (*(long *)PTR_DAT_02712a60 == 0) {
    lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,1);
    *(undefined8 *)puVar1 = 0;
    if (lVar3 == 0) {
      return 2;
    }
    *(long *)puVar1 = lVar3;
    if (param_1 == (undefined4 *)0x0) {
      *(undefined4 *)PTR_DAT_02712a98 = 0x3f800000;
    }
    else {
      *(undefined4 *)PTR_DAT_02712a98 = *param_1;
    }
    FUN_0041b5e0(PTR_DAT_02712aa0);
    puVar2 = PTR_DAT_02712ab0;
    *PTR_DAT_02712aa8 = 0;
    lVar3 = *(long *)puVar1;
    *puVar2 = 0;
    if (lVar3 == 0) {
      return 2;
    }
  }
  FUN_00432480(PTR_LAB_02712a68,0x10,0);
  FUN_00432480(PTR_LAB_02712a70,0x80,0);
  FUN_00432940(PTR_LAB_02712a78);
  FUN_00432950(PTR_LAB_02712a80);
  FUN_00432960(PTR_LAB_02712a88);
  return 1;
}


