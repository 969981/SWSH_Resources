/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009adad0; name: FUN_009adad0
 */


void FUN_009adad0(undefined8 param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  byte local_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_009423f0();
  FUN_00942fe0();
  FUN_00943270();
  FUN_00942380(param_1);
  bVar1 = FUN_008f8f70();
  if (bVar1 != 0) {
    local_38[1] = 0xff;
    local_38[2] = 0;
    local_38[3] = 0x1f;
    local_38[4] = 1;
    local_38[0] = bVar1;
    FUN_00942450(param_1);
    uVar3 = FUN_009250b0();
    FUN_00951e70(uVar3,auStack_40,local_38);
  }
  FUN_009adbc0(param_1);
  FUN_009adce0(param_1);
  FUN_009addf0(param_1);
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar4 = FUN_009432a0();
  if ((uVar4 & 1) == 0) {
    FUN_009423e0(param_1);
    FUN_00929860();
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar4 = FUN_009432a0();
  if ((uVar4 & 1) == 0) {
    FUN_00942450(param_1);
    uVar3 = FUN_009254a0();
    FUN_009ad660(uVar3,auStack_30,auStack_28);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar2 = FUN_009432b0();
  *param_2 = uVar2;
  return;
}


