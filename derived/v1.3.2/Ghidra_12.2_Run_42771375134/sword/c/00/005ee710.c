/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ee710; name: FUN_005ee710
 */


undefined8 FUN_005ee710(undefined4 param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  switch(param_1) {
  case 0x46:
  case 0x47:
  case 0x48:
    uVar5 = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)((long)param_2 + 7);
    uVar6 = *(undefined1 *)((long)param_2 + 5);
    *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_2 + 3) = uVar6;
    *(undefined1 *)((long)param_2 + 7) = uVar5;
    return 1;
  case 0x49:
  case 0x4a:
  case 0x4b:
    uVar7 = *param_2;
    *param_2 = param_2[3];
    uVar8 = param_2[1];
    param_2[3] = uVar7;
    param_2[1] = param_2[2];
    uVar5 = *(undefined1 *)(param_2 + 6);
    param_2[2] = uVar8;
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)((long)param_2 + 0xf);
    uVar6 = *(undefined1 *)((long)param_2 + 0xd);
    *(undefined1 *)((long)param_2 + 0xd) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_2 + 7) = uVar6;
    *(undefined1 *)((long)param_2 + 0xf) = uVar5;
    return 1;
  case 0x4c:
  case 0x4d:
  case 0x4e:
    uVar1 = *(uint *)(param_2 + 1);
    uVar5 = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)((long)param_2 + 0xf);
    uVar2 = *(uint *)((long)param_2 + 5);
    *(char *)((long)param_2 + 7) = (char)(uVar1 >> 4);
    *(char *)(param_2 + 1) = (char)(uVar2 >> 0xc);
    *(char *)(param_2 + 2) = (char)(uVar2 >> 4);
    *(char *)((long)param_2 + 5) = (char)(uVar1 >> 0xc);
    uVar6 = *(undefined1 *)((long)param_2 + 0xd);
    *(byte *)((long)param_2 + 3) = (byte)((uVar2 & 0xffffff) << 4) | (byte)(uVar2 >> 0x14) & 0xf;
    *(byte *)(param_2 + 3) = (byte)((uVar1 & 0xffffff) << 4) | (byte)(uVar1 >> 0x14) & 0xf;
    *(undefined1 *)((long)param_2 + 0xd) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_2 + 7) = uVar6;
    *(undefined1 *)((long)param_2 + 0xf) = uVar5;
    return 1;
  case 0x4f:
  case 0x50:
  case 0x51:
    uVar1 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((long)param_2 + 5);
    *(char *)(param_2 + 1) = (char)(uVar2 >> 0xc);
    *(char *)(param_2 + 2) = (char)(uVar2 >> 4);
    *(char *)((long)param_2 + 5) = (char)(uVar1 >> 0xc);
    *(byte *)((long)param_2 + 3) = (byte)((uVar2 & 0xffffff) << 4) | (byte)(uVar2 >> 0x14) & 0xf;
    *(byte *)(param_2 + 3) = (byte)((uVar1 & 0xffffff) << 4) | (byte)(uVar1 >> 0x14) & 0xf;
    *(char *)((long)param_2 + 7) = (char)(uVar1 >> 4);
    return 1;
  case 0x52:
  case 0x53:
  case 0x54:
    uVar1 = *(uint *)((long)param_2 + 5);
    uVar2 = *(uint *)(param_2 + 1);
    uVar3 = *(uint *)((long)param_2 + 0xd);
    *(char *)(param_2 + 1) = (char)(uVar1 >> 0xc);
    *(char *)(param_2 + 2) = (char)(uVar1 >> 4);
    *(char *)((long)param_2 + 5) = (char)(uVar2 >> 0xc);
    *(char *)((long)param_2 + 7) = (char)(uVar2 >> 4);
    uVar4 = *(uint *)(param_2 + 5);
    *(char *)(param_2 + 5) = (char)(uVar3 >> 0xc);
    *(byte *)((long)param_2 + 0xb) = (byte)((uVar3 & 0xffffff) << 4) | (byte)(uVar3 >> 0x14) & 0xf;
    *(byte *)((long)param_2 + 3) = (byte)((uVar1 & 0xffffff) << 4) | (byte)(uVar1 >> 0x14) & 0xf;
    *(byte *)(param_2 + 3) = (byte)((uVar2 & 0xffffff) << 4) | (byte)(uVar2 >> 0x14) & 0xf;
    *(char *)(param_2 + 6) = (char)(uVar3 >> 4);
    *(char *)((long)param_2 + 0xd) = (char)(uVar4 >> 0xc);
    *(byte *)(param_2 + 7) = (byte)((uVar4 & 0xffffff) << 4) | (byte)(uVar4 >> 0x14) & 0xf;
    *(char *)((long)param_2 + 0xf) = (char)(uVar4 >> 4);
  }
  return 1;
}


