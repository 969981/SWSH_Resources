/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004834c0; name: FUN_004834c0
 */


void FUN_004834c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  puVar1 = (undefined4 *)FUN_004a66a0(0x3f800000,param_3,0xb);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(long *)(puVar1 + 2) != 0) {
      FUN_004be340(param_1,*(undefined8 *)PTR_DAT_02712b18,*(long *)(puVar1 + 2),0xb,param_5,param_4
                   ,0);
      return;
    }
    if (param_5 == 0) {
      FUN_004a6800(param_1,param_3,0xb,1);
      return;
    }
    local_58 = *puVar1;
    local_54 = (undefined4)param_1;
    uStack_60 = 0xb;
    local_48 = 0x100;
    local_46 = 0;
    local_68 = param_3;
    local_50 = param_5;
    uStack_4c = param_4;
    uVar2 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_68,1,0);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  return;
}


