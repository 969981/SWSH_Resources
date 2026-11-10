/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462d70; name: FUN_00462d70
 */


void FUN_00462d70(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar2)(puVar2);
    FUN_00404870(uVar1,puVar2);
  }
  *param_1 = 0;
  return;
}


