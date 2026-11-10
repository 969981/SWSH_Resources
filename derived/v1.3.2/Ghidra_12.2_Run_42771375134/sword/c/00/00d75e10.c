/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d75e10; name: FUN_00d75e10
 */


void FUN_00d75e10(long param_1,int *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,9,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,8,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x25) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x12], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,0xc,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x27) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,0xd,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x29) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,0xe,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x21) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10], uVar2 == 0)) {
    FUN_00d76030(param_1,10,0);
  }
  else {
    FUN_00d76030(param_1,10,*(undefined8 *)((long)param_2 + uVar2));
  }
  if ((param_3 & 1) != 0) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) ||
       (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd], uVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)((long)param_2 + uVar2);
    }
    FUN_00d76030(param_1,7,uVar1);
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x17) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,6,uVar1);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x23) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x11], uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + uVar2);
  }
  FUN_00d76030(param_1,0xb,uVar1);
  *(undefined1 *)(param_1 + 0xe9) = 1;
  return;
}


