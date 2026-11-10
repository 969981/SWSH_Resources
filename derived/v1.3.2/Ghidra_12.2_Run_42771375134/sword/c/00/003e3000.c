/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e3000; name: FUN_003e3000
 */


void FUN_003e3000(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  
  uVar1 = *(uint *)(param_1 + 0x110c);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_78);
  lVar2 = *(long *)(param_1 + 0x728);
  iVar3 = *(int *)(lVar2 + 400);
  if (iVar3 == 0) {
    iVar3 = *(int *)(lVar2 + 0x1a0);
  }
  else {
    puVar4 = *(undefined8 **)(lVar2 + 0x188);
    do {
      iVar3 = iVar3 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar4,puVar4[1],0,puVar4[2],auStack_78,
                   uVar1 >> 4 & 1);
      puVar4 = puVar4 + 3;
    } while (iVar3 != 0);
    iVar3 = *(int *)(lVar2 + 0x1a0);
  }
  if (iVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x198);
    do {
      iVar3 = iVar3 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar4,puVar4[1],0,0,auStack_78,uVar1 >> 4 & 1
                  );
      puVar4 = puVar4 + 3;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(lVar2 + 0x1b0);
  if (iVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x1a8);
    do {
      iVar3 = iVar3 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar4,puVar4[1],0,0,auStack_78,uVar1 >> 4 & 1
                  );
      puVar4 = puVar4 + 3;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(lVar2 + 0x1c0);
  if (iVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x1b8);
    do {
      iVar3 = iVar3 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar4,puVar4[1],0,0,auStack_78,uVar1 >> 4 & 1
                  );
      puVar4 = puVar4 + 3;
    } while (iVar3 != 0);
  }
  (**(code **)(**(long **)(lVar2 + 0x118) + 0xa0))();
  FUN_00133b80(lVar2);
  (**(code **)(**(long **)(param_1 + 0x19e0) + 0xa0))(*(long **)(param_1 + 0x19e0),param_1 + 0x19d0)
  ;
  return;
}


