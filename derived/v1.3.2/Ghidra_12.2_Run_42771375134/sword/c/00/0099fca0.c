/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099fca0; name: FUN_0099fca0
 */


void FUN_0099fca0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_00942400();
  if (*(char *)(lVar3 + 0x24) != '\0') {
    uVar4 = 0;
    do {
      lVar3 = FUN_00942400(param_1);
      uVar1 = *(undefined1 *)(lVar3 + uVar4 + 0x25);
      lVar3 = FUN_00942400(param_1);
      uVar2 = *(undefined1 *)(lVar3 + uVar4 + 0x2f);
      lVar3 = FUN_00942400(param_1);
      FUN_0099fd40(param_1,uVar1,uVar2,*(undefined1 *)(lVar3 + uVar4 + 0x2a),*param_3);
      uVar4 = uVar4 + 1;
      lVar3 = FUN_00942400(param_1);
    } while (uVar4 < *(byte *)(lVar3 + 0x24));
  }
  return;
}


