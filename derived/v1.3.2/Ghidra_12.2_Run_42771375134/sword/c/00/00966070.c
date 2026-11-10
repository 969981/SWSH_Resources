/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966070; name: FUN_00966070
 */


void FUN_00966070(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_3 + 3) != '\0') {
    uVar2 = 0;
    do {
      lVar3 = uVar2 * 8;
      FUN_0093b130(param_3[5],*(undefined8 *)(param_3[4] + lVar3),
                   *(undefined2 *)(param_3[4] + uVar2 * 2 + 0x28),0);
      local_68 = *(undefined8 *)(param_3[4] + lVar3);
      local_58 = *(undefined1 *)(param_3 + 1);
      uStack_60 = *param_3;
      local_50 = param_3[2];
      local_48 = *(undefined2 *)(param_3[4] + uVar2 * 2 + 0x28);
      FUN_00942450(param_1);
      uVar1 = FUN_00925000();
      FUN_0095ffb0(uVar1,auStack_38,&local_68);
      FUN_008e3830(*(undefined8 *)(param_3[4] + lVar3),2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_3 + 3));
  }
  return;
}


