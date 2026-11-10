/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911aa0; name: FUN_00911aa0
 */


void FUN_00911aa0(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_58 [2];
  undefined2 local_56;
  char local_54 [6];
  undefined2 local_4e;
  undefined1 local_4c;
  undefined2 local_4a;
  undefined1 local_48;
  undefined2 local_46;
  undefined1 local_44;
  undefined2 local_42;
  undefined1 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  undefined2 local_36;
  undefined1 local_34;
  undefined2 local_32;
  
  cVar1 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x60));
  if ((byte)(cVar1 * '\x05') != 0) {
    bVar4 = 0;
    do {
      FUN_008ebfa0(0x10000);
      bVar4 = bVar4 + 1;
    } while (bVar4 < (byte)(cVar1 * '\x05'));
  }
  local_58[0] = 0;
  local_54[0] = '\0';
  local_56 = 4;
  local_54[2] = '\0';
  local_54[3] = '\0';
  local_54[4] = 0;
  local_4e = 4;
  local_4c = 0;
  local_4a = 0;
  local_48 = 0;
  local_46 = 4;
  local_44 = 0;
  local_42 = 0;
  local_40 = 0;
  local_3e = 4;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_36 = 4;
  local_34 = 0;
  local_32 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00911c00(param_1,local_58,0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00911c00(param_1,local_58,1);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_00911c00(param_1,local_58,2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00911c00(param_1,local_58,3);
  }
  FUN_009188a0(*(undefined8 *)(param_1 + 0x5e8),local_58);
  uVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x60));
  if (local_54[(uVar2 & 0xff) * 8] != '\0') {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
    uVar3 = FUN_008df7f0(uVar3,4);
    FUN_008e5650(uVar3,*(undefined2 *)(local_58 + (uVar2 & 0xff) * 8 + 2));
  }
  return;
}


