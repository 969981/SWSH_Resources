/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134e1c0; name: FUN_0134e1c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134e1c0(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  bVar4 = (param_2 & 1) == 0;
  fVar5 = 1.0;
  if (bVar4) {
    fVar5 = -1.0;
  }
  fVar6 = (float)_DAT_01d4b290;
  uVar2 = (ulong)_DAT_01d4b290 >> 0x20;
  fVar7 = (float)_UNK_01d4b298;
  uVar3 = (ulong)_UNK_01d4b298 >> 0x20;
  uVar1 = DAT_01d4c624;
  if (bVar4) {
    uVar1 = DAT_01d4c544;
  }
  local_30 = FUN_00a92cd0(uVar1,0,0);
  local_40 = CONCAT44((float)uVar2 * fVar5 + (float)((ulong)_DAT_02a6f170 >> 0x20),
                      fVar6 * fVar5 + (float)_DAT_02a6f170);
  uStack_38 = CONCAT44((float)uVar3 * fVar5 + (float)((ulong)uRam0000000002a6f178 >> 0x20),
                       fVar7 * fVar5 + (float)uRam0000000002a6f178);
  FUN_012dc9c0(param_1,&local_40);
  FUN_012dc7f0(param_1,local_30);
  return;
}


