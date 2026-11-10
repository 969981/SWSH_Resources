/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152e3a0; name: FUN_0152e3a0
 */


ulong FUN_0152e3a0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  plVar2 = (long *)(param_1 + (long)param_2 * 8 + 0x52be8);
  local_48 = 0;
  local_58 = 0xf4b17a579f18960;
  lStack_50 = -0x7d5d4e8add6295a5;
  local_68 = 0;
  uStack_60 = 0;
  uVar8 = 0xcbf29ce484222645;
  local_78 = 0;
  local_70 = 0;
  snprintf((char *)&local_78,0x20,"%lu",*plVar2);
  if ((byte)local_78 != 0) {
    pbVar6 = (byte *)((ulong)&local_78 | 1);
    bVar3 = (byte)local_78;
    do {
      uVar8 = (uVar8 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
  }
  FUN_01028fc0(&local_58,uVar8);
  *plVar2 = lStack_50 + local_58;
  local_68 = 0;
  local_78 = 0xf4b17a579f18960;
  local_70 = 0x82a2b175229d6a5b;
  FUN_01028fc0(&local_78);
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar1 = param_3 + 1;
    if (uVar1 == 0) {
      uVar8 = (ulong)(uint)((int)local_70 + (int)local_78);
    }
    else {
      uVar7 = (0x20 - LZCOUNT(uVar1)) -
              (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                     == 0);
      uVar8 = uVar7 >> 6;
      if ((uVar7 & 0x3f) != 0) {
        uVar8 = uVar8 + 1;
      }
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar7 / uVar8;
      }
      uVar5 = 0;
      if (uVar8 <= uVar7) {
        uVar5 = 0xffffffffffffffff >> (-uVar4 & 0x3f);
      }
      do {
        uVar7 = local_78 ^ local_70;
        uVar8 = local_78 + local_70;
        local_70 = uVar7 >> 0x1b | uVar7 << 0x25;
        local_78 = uVar7 ^ (local_78 >> 0x28 | local_78 << 0x18) ^ uVar7 << 0x10;
        uVar8 = uVar8 & uVar5;
      } while (uVar1 <= (uint)uVar8);
    }
  }
  return uVar8;
}


