/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012189f0; name: FUN_012189f0
 */


void FUN_012189f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  long *local_50;
  
  local_50 = (long *)0x0;
  uStack_78 = 0x666666666666666;
  local_80 = param_2;
  FUN_01218ba0(param_1,*param_3,&local_80);
  if (alStack_70 == local_50) {
    pcVar1 = *(code **)(*local_50 + 0x20);
LAB_01218a5c:
    (*pcVar1)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar1 = *(code **)(*local_50 + 0x28);
    goto LAB_01218a5c;
  }
  uStack_78 = 0x666666666666666;
  local_50 = (long *)0x0;
  local_80 = param_2;
  FUN_01218ba0(param_1 + 0x60,*param_3,&local_80);
  if (alStack_70 == local_50) {
    pcVar1 = *(code **)(*local_50 + 0x20);
LAB_01218aa4:
    (*pcVar1)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar1 = *(code **)(*local_50 + 0x28);
    goto LAB_01218aa4;
  }
  uStack_78 = 0x666666666666666;
  local_50 = (long *)0x0;
  local_80 = param_2;
  FUN_01218ba0(param_1 + 0xc0,*param_3,&local_80);
  if (alStack_70 == local_50) {
    pcVar1 = *(code **)(*local_50 + 0x20);
LAB_01218aec:
    (*pcVar1)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar1 = *(code **)(*local_50 + 0x28);
    goto LAB_01218aec;
  }
  uStack_78 = 0x666666666666666;
  local_50 = (long *)0x0;
  local_80 = param_2;
  FUN_01218ba0(param_1 + 0x120,*param_3,&local_80);
  if (alStack_70 == local_50) {
    pcVar1 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_01218b38;
    pcVar1 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar1)();
LAB_01218b38:
  uStack_78 = 0x666666666666666;
  local_50 = (long *)0x0;
  local_80 = param_2;
  FUN_01218ba0(param_1 + 0x180,*param_3,&local_80);
  if (alStack_70 == local_50) {
    pcVar1 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) {
      return;
    }
    pcVar1 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar1)();
  return;
}


