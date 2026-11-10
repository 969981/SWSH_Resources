/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bbe00; name: FUN_006bbe00
 */


void FUN_006bbe00(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  size_t sVar3;
  byte *pbVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_027151f8;
  uVar5 = 0xcbf29ce484222645;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = (long)&DAT_01d38550;
  sVar3 = strlen((char *)param_2);
  bVar1 = *param_2;
  pbVar4 = param_2;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  param_1[1] = uVar5;
  param_1[2] = (long)param_2;
  param_1[3] = sVar3;
  param_1[4] = 0;
  return;
}


