/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5490; name: FUN_011f5490
 */


void FUN_011f5490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((((param_2 != (undefined8 *)0x0) &&
       (puVar4 = (undefined8 *)*param_2, puVar4 != (undefined8 *)0x0)) &&
      (param_1 != (undefined8 *)0x0)) && (0xff < (ulong)(param_2[1] << 3))) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[3];
    puVar4[2] = param_1[2];
    puVar4[3] = uVar3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    uVar5 = (ulong)param_2[4] >> 3;
    *(byte *)(param_2[3] + uVar5) =
         *(byte *)(param_2[3] + uVar5) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
  }
  return;
}


