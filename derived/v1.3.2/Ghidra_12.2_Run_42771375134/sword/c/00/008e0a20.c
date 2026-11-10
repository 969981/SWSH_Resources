/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e0a20; name: FUN_008e0a20
 */


void FUN_008e0a20(long param_1,ulong param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_0087eca0(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x2ac) = uVar1;
    uVar1 = FUN_0087ed40(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x2ad) = uVar1;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined1 *)(param_1 + 0x2ae) = 0x12;
  }
  uVar1 = FUN_0087ccf0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x2af) = uVar1;
  if ((param_3 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      uVar2 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),1);
      *(undefined2 *)(param_1 + 0x2a2) = uVar2;
      uVar2 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),2);
      *(undefined2 *)(param_1 + 0x2a4) = uVar2;
      uVar2 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),3);
      *(undefined2 *)(param_1 + 0x2a6) = uVar2;
      uVar2 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),4);
      *(undefined2 *)(param_1 + 0x2a8) = uVar2;
      uVar2 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),5);
    }
    else {
      uVar2 = FUN_00879f50();
      *(undefined2 *)(param_1 + 0x2a2) = uVar2;
      uVar2 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),2);
      *(undefined2 *)(param_1 + 0x2a4) = uVar2;
      uVar2 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),3);
      *(undefined2 *)(param_1 + 0x2a6) = uVar2;
      uVar2 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),4);
      *(undefined2 *)(param_1 + 0x2a8) = uVar2;
      uVar2 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),5);
    }
    *(undefined2 *)(param_1 + 0x2aa) = uVar2;
  }
  uVar2 = FUN_008783b0(*(undefined8 *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x2a0) = uVar2;
  return;
}


