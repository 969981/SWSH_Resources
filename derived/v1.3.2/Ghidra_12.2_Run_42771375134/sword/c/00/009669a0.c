/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009669a0; name: FUN_009669a0
 */


void FUN_009669a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 local_36;
  char local_28 [8];
  
  iVar2 = FUN_00880b40(*(undefined4 *)*param_3);
  if (iVar2 == 8) {
    uVar1 = *(undefined4 *)(param_3 + 3);
    uVar3 = FUN_00880f20(*(undefined4 *)*param_3);
    local_38 = FUN_008ec050(uVar1,uVar3);
    local_48 = param_3[1];
    uStack_40 = param_3[2];
    local_36 = 0;
    FUN_00942450(param_1);
    uVar4 = FUN_009252b0();
    FUN_0094c820(uVar4,local_28,&local_48);
    if (local_28[0] != '\0') {
      uVar4 = FUN_009423b0(param_1);
      FUN_00936080(uVar4,param_3[2],0x4c4);
    }
  }
  return;
}


