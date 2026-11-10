/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7e30; name: FUN_004e7e30
 */


void FUN_004e7e30(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 4);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x50;
    if (*(int *)(puVar1 + 1) != 0) {
      uVar2 = *(int *)(puVar1 + 1) << 6 | 0x10;
    }
    *puVar1 = *param_2;
  }
  FUN_00468bd0(*param_1,*param_3,3,0,0xab,puVar1,uVar2,0);
  return;
}


