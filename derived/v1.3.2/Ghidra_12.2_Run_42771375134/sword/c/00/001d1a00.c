/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d1a00; name: FUN_001d1a00
 */


undefined8 * FUN_001d1a00(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x90,0x10);
    *(undefined8 *)((long)puVar1 + 0x24) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined1 *)((long)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined2 *)((long)puVar1 + 0x8c) = 0;
    return puVar1;
  case 3:
  case 4:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x150,0x10);
    puVar1[6] = puVar1 + 1;
    puVar1[7] = 0x400000000;
    puVar1[0x11] = puVar1 + 8;
    puVar1[0x12] = 0x400000000;
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined2 *)(puVar1 + 0x1f) = 0;
    *(undefined8 *)((long)puVar1 + 0x11c) = 0;
    *(undefined8 *)((long)puVar1 + 0x124) = 0;
    *(undefined8 *)((long)puVar1 + 300) = 0;
    *(undefined8 *)((long)puVar1 + 0x134) = 0;
    *(undefined8 *)((long)puVar1 + 0x13c) = 0;
    *(undefined8 *)((long)puVar1 + 0x144) = 0;
    *(undefined1 *)((long)puVar1 + 0x14c) = 0;
    *(undefined2 *)((long)puVar1 + 0x14e) = 0;
    return puVar1;
  case 5:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0xd0,0x10);
    puVar1[6] = puVar1 + 1;
    puVar1[7] = 0x400000000;
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar1[0x11] = puVar1 + 8;
    puVar1[0x12] = 0x400000000;
    return puVar1;
  case 6:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x20,0x10);
    *(undefined2 *)(puVar1 + 3) = 0;
    return puVar1;
  case 7:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x50,0x10);
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 2) = 0;
    *(undefined8 *)((long)puVar1 + 0x44) = 0;
    *(undefined8 *)((long)puVar1 + 0x3c) = 0;
    *(undefined2 *)((long)puVar1 + 0x4c) = 0;
    return puVar1;
  case 8:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x1c,0x10);
    return puVar1;
  case 9:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x90,0x10);
    return puVar1;
  case 10:
    puVar1 = (undefined8 *)FUN_001a6400(param_1 + 0x1fc0,0x10,0x10);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}


