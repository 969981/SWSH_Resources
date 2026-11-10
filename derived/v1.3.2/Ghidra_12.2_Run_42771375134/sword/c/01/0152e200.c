/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152e200; name: FUN_0152e200
 */


ulong FUN_0152e200(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xf4b17a579f18960;
  lStack_50 = -0x7d5d4e8add6295a5;
  uVar7 = 0xcbf29ce484222645;
  local_78 = 0;
  local_70 = 0;
  snprintf((char *)&local_78,0x20,"%lu",*(long *)(param_1 + 0x52be0));
  if ((byte)local_78 != 0) {
    pbVar5 = (byte *)((ulong)&local_78 | 1);
    bVar2 = (byte)local_78;
    do {
      uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
  }
  FUN_01028fc0(&local_58,uVar7);
  *(long *)(param_1 + 0x52be0) = lStack_50 + local_58;
  local_68 = 0;
  local_78 = 0xf4b17a579f18960;
  local_70 = 0x82a2b175229d6a5b;
  FUN_01028fc0(&local_78);
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar1 = param_2 + 1;
    if (uVar1 == 0) {
      uVar7 = (ulong)(uint)((int)local_70 + (int)local_78);
    }
    else {
      uVar6 = (0x20 - LZCOUNT(uVar1)) -
              (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                     == 0);
      uVar7 = uVar6 >> 6;
      if ((uVar6 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar6 / uVar7;
      }
      uVar4 = 0;
      if (uVar7 <= uVar6) {
        uVar4 = 0xffffffffffffffff >> (-uVar3 & 0x3f);
      }
      do {
        uVar6 = local_78 ^ local_70;
        uVar7 = local_78 + local_70;
        local_70 = uVar6 >> 0x1b | uVar6 << 0x25;
        local_78 = uVar6 ^ (local_78 >> 0x28 | local_78 << 0x18) ^ uVar6 << 0x10;
        uVar7 = uVar7 & uVar4;
      } while (uVar1 <= (uint)uVar7);
    }
  }
  return uVar7;
}


