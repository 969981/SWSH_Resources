/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8060; name: FUN_004a8060
 */


void FUN_004a8060(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined8 *)((long)puVar1 + 4) = 0xffffffff;
    puVar1[2] = 0;
    *(undefined4 *)puVar1 = 0;
    *(ushort *)((long)puVar1 + 0xc) = *(ushort *)((long)puVar1 + 0xc) & 0xf800;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  return;
}


