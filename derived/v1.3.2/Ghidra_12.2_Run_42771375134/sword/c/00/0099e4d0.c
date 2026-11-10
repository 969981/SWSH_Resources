/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e4d0; name: FUN_0099e4d0
 */


void FUN_0099e4d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [40];
  char local_98 [8];
  undefined2 local_90;
  undefined2 local_8e;
  undefined1 local_89;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 auStack_84 [36];
  
  uVar1 = param_3[1];
  uVar2 = *(undefined4 *)*param_3;
  FUN_0093b2e0(param_3[2]);
  lVar5 = FUN_0093b2f0(param_3[2]);
  if (lVar5 != 0) {
    do {
      uVar6 = FUN_009423e0(param_1);
      uVar4 = FUN_0092e5a0(uVar6,uVar1,lVar5,uVar2);
      FUN_00943e60(auStack_c0);
      FUN_00943f20(auStack_c0,2,0x20c);
      uVar3 = FUN_008e0a00(lVar5);
      FUN_00943f60(auStack_c0,uVar3);
      uVar6 = FUN_009423e0(param_1);
      FUN_0092bb20(uVar6,auStack_c0,uVar1,lVar5,uVar2);
      local_90 = 0x1f1f;
      *(undefined2 *)((undefined4 *)((ulong)&local_90 | 2) + 1) = 0;
      *(undefined4 *)((ulong)&local_90 | 2) = 0;
      local_88 = 0x101;
      local_86 = 0;
      FUN_00943e60(auStack_84);
      uVar3 = FUN_008e0a00(lVar5);
      local_90 = CONCAT11(uVar3,(undefined1)local_90);
      local_86 = 0;
      local_89 = 1;
      local_8e = uVar4;
      FUN_00943eb0(auStack_84,auStack_c0);
      FUN_00942450(param_1);
      uVar6 = FUN_00925b20();
      FUN_00948f40(uVar6,local_98,&local_90);
      if (local_98[0] != '\0') {
        lVar5 = FUN_00942400(param_1);
        FUN_0093af10(lVar5 + 0x10);
      }
      lVar5 = FUN_0093b2f0(param_3[2]);
    } while (lVar5 != 0);
  }
  return;
}


