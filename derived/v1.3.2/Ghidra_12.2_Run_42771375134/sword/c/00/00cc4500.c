/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4500; name: FUN_00cc4500
 */


void FUN_00cc4500(long param_1,byte param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 local_1a4;
  undefined1 local_1a0 [4];
  undefined8 local_19c;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  byte local_5c [4];
  undefined1 *local_58;
  
  uVar5 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 600);
  local_5c[0] = param_2;
  iVar1 = FUN_00c97640(uVar5);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      piVar3 = (int *)FUN_00c97510(uVar5,uVar6);
      if (piVar3 != (int *)0x0) {
        local_1a0[0] = 0;
        local_19c = 0x3ff00000000;
        local_1a4 = 0;
        local_168 = 0;
        local_190 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        if ((0x2c < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x16], local_1a4 = 0,
           uVar4 != 0)) {
          local_1a4 = *(undefined4 *)((long)piVar3 + uVar4);
        }
        FUN_00cc4260(piVar3,local_1a0,piVar3,local_5c,&local_1a4);
        local_58 = local_1a0;
        (*(code *)*param_3)(param_3 + 4,&local_58);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00c97640(uVar5);
    } while (uVar6 < uVar2);
  }
  return;
}


