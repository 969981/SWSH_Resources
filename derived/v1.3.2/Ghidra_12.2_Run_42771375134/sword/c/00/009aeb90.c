/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aeb90; name: FUN_009aeb90
 */


void FUN_009aeb90(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long local_38;
  
  lVar4 = *param_3;
  uVar1 = FUN_00946070(lVar4);
  do {
    if ((uVar1 & 1) != 0) {
      return;
    }
    local_38 = lVar4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925c20();
    FUN_009ab5d0(uVar2,auStack_48,&local_38);
    lVar3 = FUN_009460c0(lVar4);
    FUN_009423f0(param_1);
    uVar2 = FUN_00942fe0();
    uVar1 = FUN_00943290(uVar2,5);
    if (((uVar1 & 1) == 0) || (*(int *)(lVar3 + 8) == 4)) {
      local_38 = lVar3;
      FUN_00942450(param_1);
      uVar2 = FUN_00925a30();
      FUN_009abf90(uVar2,auStack_48,&local_38);
      uVar1 = FUN_00946070(lVar4);
    }
    else {
      *(undefined1 *)(lVar3 + 0x59) = 1;
      uVar1 = FUN_00946070(lVar4);
    }
    if ((uVar1 & 1) != 0) {
      FUN_009aecb0(param_1);
    }
    FUN_009423f0(param_1);
    uVar2 = FUN_00942fe0();
    uVar1 = FUN_00943290(uVar2,0);
    if ((uVar1 & 1) == 0) {
      FUN_009423f0(param_1);
      uVar2 = FUN_00942fe0();
      uVar1 = FUN_00943290(uVar2,5);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    uVar1 = FUN_00946070(lVar4);
  } while( true );
}


