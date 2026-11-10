/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4aa0; name: FUN_008d4aa0
 */


void FUN_008d4aa0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x178) != 2) {
    return;
  }
  pbVar2 = (byte *)FUN_008d54e0(*param_2);
  bVar1 = *pbVar2;
  puVar3 = (ulong *)FUN_0076cd80(*(undefined8 *)(param_1 + 0x170),"MyClientID");
  if (puVar3 != (ulong *)0x0) {
    *puVar3 = (ulong)bVar1;
  }
  puVar4 = (undefined8 *)FUN_0076cd80(*(undefined8 *)(param_1 + 0x170),"p_Score");
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  puVar4 = (undefined8 *)FUN_0076cd80(*(undefined8 *)(param_1 + 0x170),"p_PokeChangeEnable");
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  FUN_009e9220(*pbVar2,*param_2);
  return;
}


