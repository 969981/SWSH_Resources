/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f030; name: FUN_0095f030
 */


void FUN_0095f030(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined6 uStack_90;
  undefined1 uStack_8a;
  uint local_88;
  undefined1 auStack_84 [36];
  
  if (*(char *)(param_2 + 0xe) == '\t') {
    FUN_0093b2e0(param_4);
    lVar3 = FUN_0093b2f0(param_4);
    if (lVar3 != 0) {
      do {
        iVar2 = FUN_008e19f0(lVar3);
        if ((iVar2 == 3) && (iVar2 = FUN_0093b3e0(param_4,lVar3), iVar2 == 1)) {
          local_b0[0] = 0x1f;
          local_ac = 0x2d;
          local_88 = 0;
          local_a8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_91 = 0;
          uStack_90 = 0;
          uStack_8a = 0;
          FUN_00943e60(auStack_84);
          local_b0[0] = FUN_008e0a00(lVar3);
          local_ac = 3;
          uVar1 = FUN_008e0a00(lVar3);
          local_a8 = CONCAT71(local_a8._1_7_,uVar1);
          uStack_8a = 1;
          local_88 = local_88 & 0xffffff;
          FUN_00942450(param_1);
          uVar4 = FUN_00925570();
          FUN_00948290(uVar4,auStack_c0,local_b0);
        }
        lVar3 = FUN_0093b2f0(param_4);
      } while (lVar3 != 0);
    }
  }
  return;
}


