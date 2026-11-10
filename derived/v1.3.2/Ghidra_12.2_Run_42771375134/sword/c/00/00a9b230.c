/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9b230; name: FUN_00a9b230
 */


void FUN_00a9b230(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) < uVar2) {
    uVar1 = *(uint *)(param_1 + 0x24) + 1;
    *(uint *)(param_1 + 0x24) = uVar1;
    if (*(long *)(param_1 + 8) != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      uVar3 = FUN_008f35c0(*(long *)(param_1 + 8),0x4000000);
      if ((uVar3 & 1) != 0) {
        fVar5 = (float)NEON_ucvtf(uVar6);
        fVar4 = (float)NEON_ucvtf(uVar7);
        local_50 = 0x4e39ea4b54348ed6;
        local_48 = "Audience_Tension";
        local_40 = 0x10;
        local_38 = 0;
        FUN_008962a0(((float)uVar1 / (float)uVar2) * (fVar4 - fVar5) + fVar5,
                     *(long *)PTR_DAT_027107a8 + 0x108,&local_50,0);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
    }
  }
  return;
}


