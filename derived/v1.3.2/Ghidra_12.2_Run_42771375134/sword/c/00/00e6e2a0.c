/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6e2a0; name: FUN_00e6e2a0
 */


void FUN_00e6e2a0(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 6) = 0xcbf29ce484222645;
  *(undefined2 *)(param_1 + 8) = 0;
  if (param_2 != (int *)0x0) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
      bVar1 = false;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
      bVar1 = false;
      if (uVar3 != 0) {
        bVar1 = *(char *)((long)param_2 + uVar3) != '\0';
      }
    }
    *(bool *)param_1 = bVar1;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
      bVar1 = false;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
      bVar1 = false;
      if (uVar3 != 0) {
        bVar1 = *(char *)((long)param_2 + uVar3) != '\0';
      }
    }
    *(bool *)((long)param_1 + 1) = bVar1;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
      bVar1 = false;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
      bVar1 = false;
      if (uVar3 != 0) {
        bVar1 = *(char *)((long)param_2 + uVar3) != '\0';
      }
    }
    *(bool *)((long)param_1 + 2) = bVar1;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (undefined1)*(undefined4 *)((long)param_2 + uVar3);
      }
    }
    *(undefined1 *)((long)param_1 + 3) = uVar2;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
      uVar4 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = *(undefined8 *)((long)param_2 + uVar3);
      }
    }
    *(undefined8 *)(param_1 + 2) = uVar4;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
      bVar1 = false;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
      bVar1 = false;
      if (uVar3 != 0) {
        bVar1 = *(char *)((long)param_2 + uVar3) != '\0';
      }
    }
    *(bool *)(param_1 + 4) = bVar1;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
      bVar1 = false;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
      bVar1 = false;
      if (uVar3 != 0) {
        bVar1 = *(char *)((long)param_2 + uVar3) != '\0';
      }
    }
    *(bool *)((long)param_1 + 0x11) = bVar1;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
      uVar4 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = *(undefined8 *)((long)param_2 + uVar3);
      }
    }
    *(undefined8 *)(param_1 + 6) = uVar4;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (undefined1)*(undefined4 *)((long)param_2 + uVar3);
      }
    }
    *(undefined1 *)(param_1 + 8) = uVar2;
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0x17) {
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (undefined1)*(undefined4 *)((long)param_2 + uVar3);
      }
    }
    *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  }
  return;
}


