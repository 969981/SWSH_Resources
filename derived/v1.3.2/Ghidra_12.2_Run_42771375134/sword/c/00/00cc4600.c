/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4600; name: FUN_00cc4600
 */


undefined8 FUN_00cc4600(long param_1,byte param_2,undefined8 *param_3,void *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 local_1ac;
  undefined1 local_1a8 [4];
  undefined8 local_1a4;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  byte local_64 [4];
  undefined1 *local_58;
  
  uVar5 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 600);
  local_64[0] = param_2;
  uVar2 = FUN_00c97640(uVar5);
  if ((int)uVar2 != 0) {
    uVar6 = 0;
    do {
      piVar3 = (int *)FUN_00c97510(uVar5,uVar6);
      if (piVar3 != (int *)0x0) {
        local_1a8[0] = 0;
        local_1a4 = 0x3ff00000000;
        local_1ac = 0;
        local_170 = 0;
        local_198 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_190 = 0;
        uStack_188 = 0;
        if (0x2c < *(ushort *)((long)piVar3 - (long)*piVar3)) {
          uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x16];
          local_1ac = 0;
          if (uVar4 != 0) {
            local_1ac = *(undefined4 *)((long)piVar3 + uVar4);
          }
        }
        FUN_00cc4260(piVar3,local_1a8,piVar3,local_64,&local_1ac);
        local_58 = local_1a8;
        uVar4 = (*(code *)*param_3)(param_3 + 4,&local_58);
        if ((uVar4 & 1) != 0) {
          memcpy(param_4,local_1a8,0x13c);
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar1 = FUN_00c97640(uVar5);
    } while (uVar6 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}


