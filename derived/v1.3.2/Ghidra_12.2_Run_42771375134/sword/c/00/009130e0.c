/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009130e0; name: FUN_009130e0
 */


void FUN_009130e0(byte *param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  uVar2 = (ulong)bVar1;
  if (uVar2 < 0x1e) {
    param_1[uVar2 + 0x1f] = param_2;
    param_1[uVar2 + 1] = 0;
    *param_1 = bVar1 + 1;
  }
  if (param_2 < 0x1e) {
    param_1[(ulong)param_2 + 0xf4] = 1;
    if (param_1[(ulong)param_2 + 0x112] < 100) {
      param_1[(ulong)param_2 + 0x112] = param_1[(ulong)param_2 + 0x112] + 1;
    }
  }
  return;
}


