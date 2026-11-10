/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff230; name: FUN_004ff230
 */


void FUN_004ff230(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,0x28);
  *param_3 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar1 = 0;
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined2 *)((long)puVar1 + 0x24) = 0;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  }
  return;
}


