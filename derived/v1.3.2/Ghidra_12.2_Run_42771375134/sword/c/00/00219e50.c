/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00219e50; name: FUN_00219e50
 */


void FUN_00219e50(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float local_48;
  float fStack_44;
  float local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  if (param_1 != 0.0) {
    uVar1 = FUN_00218620(param_2);
    local_48 = param_1 * 1.5;
    local_3c = 0x8800880088880000;
    local_34 = 0x88000088;
    fStack_44 = local_48;
    local_40 = local_48;
    FUN_002190d0(uVar1,&local_48);
    uVar1 = FUN_00218620(param_2,param_4);
    local_3c = 0xff00ff00ffff0000;
    local_34 = 0xff0000ff;
    local_48 = param_1;
    fStack_44 = param_1;
    local_40 = param_1;
    FUN_002190d0(uVar1,&local_48);
  }
  return;
}


