/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf30b0; name: FUN_00bf30b0
 */


void FUN_00bf30b0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if ((uVar1 < 0x40 && (1L << ((ulong)uVar1 & 0x3f) & 0x8000000000040042U) != 0) || (uVar1 == 0x88))
  {
    *(byte *)(*(long *)(param_1 + 0x148) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x148) + 0x58) & 0xfe;
    uVar1 = *(uint *)(param_1 + 0x68);
  }
  switch(uVar1) {
  case 1:
  case 6:
  case 0x12:
  case 0x16:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x3f:
  case 0x40:
  case 0x44:
  case 0x4b:
  case 0x4c:
  case 0x4f:
  case 0x67:
  case 0x6b:
  case 0x6f:
  case 0x70:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x80:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x89:
    lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    uVar1 = *(uint *)(param_1 + 0x68);
  }
  if (uVar1 == 0) {
LAB_00bf3154:
    lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
    if (7 < iVar2 - 0x37U) goto LAB_00bf3154;
  }
  if (((0x2c < iVar2 - 0x42U) || ((1L << ((ulong)(iVar2 - 0x42U) & 0x3f) & 0x1c0000400003U) == 0))
     && (iVar2 != 5)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xe0) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
  }
  if (iVar2 == 0x11) {
switchD_00bf321c_caseD_b:
    lVar3 = *(long *)(*(long *)(param_1 + 0x108) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
    switch(iVar2) {
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x2b:
    case 0x2c:
    case 0x52:
    case 0x53:
    case 0x54:
      break;
    default:
      goto switchD_00bf321c_caseD_b;
    }
  }
  if (((iVar2 != 8) && (iVar2 != 0x17)) && (iVar2 != 0x52)) {
    lVar3 = *(long *)(param_1 + 0x108);
    lVar4 = *(long *)(lVar3 + 0x860);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    lVar3 = *(long *)(lVar3 + 0x868);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    iVar2 = *(int *)(param_1 + 0x68);
  }
  if ((((((8 < iVar2 - 0x2dU) && (iVar2 != 0x16)) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0x630),
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe, *(int *)(param_1 + 0x68) == 0x5e))
       || (lVar3 = *(long *)(*(long *)(param_1 + 0x118) + 0x630),
          *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe, *(int *)(param_1 + 0x68) != 0x5f
          )) && (lVar3 = *(long *)(*(long *)(param_1 + 0x120) + 0x630),
                *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe,
                *(int *)(param_1 + 0x68) == 0x60)) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x128) + 0x630),
     *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe, *(int *)(param_1 + 0x68) != 0x61)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x130) + 0x630);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    uVar1 = *(uint *)(param_1 + 0x68);
    if ((uVar1 & 0xfffffffe) == 100) goto LAB_00bf3308;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xd8) + 0x630);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  uVar1 = *(uint *)(param_1 + 0x68);
LAB_00bf3308:
  if ((((uVar1 - 0x6f < 2) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x110) + 0x630),
       *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe, *(int *)(param_1 + 0x68) != 0x75))
      && (lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x630),
         *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe, *(int *)(param_1 + 0x68) == 0x76)
      ) || (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x630),
           *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe,
           4 < *(int *)(param_1 + 0x68) - 0x77U)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x140) + 0x5f0);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  }
  return;
}


