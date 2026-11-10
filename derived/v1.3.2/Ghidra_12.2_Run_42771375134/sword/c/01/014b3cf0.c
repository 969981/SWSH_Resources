/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3cf0; name: FUN_014b3cf0
 */


void FUN_014b3cf0(int param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  byte *pbStack_58;
  undefined8 local_50;
  long local_48;
  byte local_40 [32];
  
  if ((param_1 == 0x85) || (param_1 == 0x19)) {
    uVar2 = 0xcbf29ce484222645;
    snprintf((char *)local_40,0x20,"PM%03dVC",param_1);
    if (local_40[0] != 0) {
      pbVar1 = (byte *)((ulong)local_40 | 1);
      do {
        uVar2 = (uVar2 ^ local_40[0]) * 0x100000001b3;
        local_40[0] = *pbVar1;
        pbVar1 = pbVar1 + 1;
      } while (local_40[0] != 0);
    }
    local_50 = 0x1f;
    local_48 = 0;
    local_80 = 0x90bbc6b0190bf053;
    local_78 = &DAT_01cfa430;
    local_70 = 4;
    local_68 = 0;
    local_60 = uVar2;
    pbStack_58 = local_40;
    FUN_008961b0(*(long *)PTR_DAT_027107a8 + 0x108,&local_60,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


