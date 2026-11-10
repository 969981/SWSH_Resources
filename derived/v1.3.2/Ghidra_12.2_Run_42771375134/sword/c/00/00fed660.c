/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fed660; name: FUN_00fed660
 */


undefined8 FUN_00fed660(long param_1,int *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*param_2 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (*(uint *)PTR_DAT_027232c0 != 0) {
    uVar1 = 0;
    puVar2 = (undefined4 *)(*(long *)PTR_PTR_027232c8 + 4);
    do {
      if (puVar2[-1] == *param_2) {
        uVar3 = NEON_ucvtf(*puVar2);
        break;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 < *(uint *)PTR_DAT_027232c0);
  }
  FUN_00ffd510(uVar3,*(undefined8 *)(param_1 + 0x10),param_1 + 0x88);
  return 1;
}


