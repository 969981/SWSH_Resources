/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ab200; name: FUN_009ab200
 */


void FUN_009ab200(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_bf8 [48];
  undefined1 auStack_bc8 [48];
  undefined1 auStack_b98 [2896];
  ulong local_48;
  
  FUN_00945e10(auStack_b98);
  cVar1 = FUN_00945f40(param_2);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      puVar3 = (undefined8 *)FUN_00946110(param_2,uVar6);
      if ((*(int *)(puVar3 + 1) == 1) && (*(char *)((long)puVar3 + 0x14) != '\0')) {
        FUN_00943e60(auStack_bc8);
        uVar4 = FUN_008e0a00(*puVar3);
        local_48 = (uVar4 & 0x1f) << 4 | 6;
        FUN_009ab320(param_1,auStack_bf8,&local_48,*(undefined1 *)(puVar3 + 0xb));
        FUN_00946020(auStack_b98,auStack_bf8);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00945f40(param_2);
    } while ((uVar6 & 0xff) < (uVar2 & 0xff));
  }
  cVar1 = FUN_00945f40(auStack_b98);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      uVar5 = FUN_00946110(auStack_b98,uVar6);
      FUN_00946020(param_2,uVar5);
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00945f40(auStack_b98);
    } while ((uVar6 & 0xff) < (uVar2 & 0xff));
  }
  return;
}


