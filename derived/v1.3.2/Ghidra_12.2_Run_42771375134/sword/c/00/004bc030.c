/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bc030; name: FUN_004bc030
 */


void FUN_004bc030(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if ((param_2 == 0) || (*(uint *)(param_1 + 1) == 0)) {
    return;
  }
  lVar2 = *(long *)*param_1;
  if (lVar2 == 0) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_1 + 1) <= uVar1) {
        return;
      }
      lVar2 = ((long *)*param_1)[uVar1];
    } while (lVar2 == 0);
  }
  else {
    uVar1 = 0;
  }
  do {
    do {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xff;
      local_50 = 0xff;
      local_48 = 0;
      local_70 = param_2;
      FUN_0049a1b0(lVar2 + 0x38,&local_70);
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
    do {
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_1 + 1) <= uVar1) {
        return;
      }
      lVar2 = *(long *)(*param_1 + (ulong)uVar1 * 8);
    } while (lVar2 == 0);
  } while( true );
}


